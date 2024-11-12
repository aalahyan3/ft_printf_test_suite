#!/bin/bash

RED='\033[31m'
BOLD="\033[1m"
GREEN='\033[32m'
YELLOW='\033[33m'
BLUE='\033[34m'
MAGENTA='\033[35m'
CYAN='\033[36m'
RESET='\033[0m'
ORANGE="\033[38;5;214m"

echo -e "${MAGENTA}\n\t---------------------------------------------------------------"
printf "\t|${ORANGE} ft_printf test suite created by Ayoub Alahyane ${CYAN}@aalahyan3  ${MAGENTA} |\n"
echo -e "${MAGENTA}\t---------------------------------------------------------------\n\n"

printf "${CYAN}=>compiling you library...${RESET}\n\n"
make build_test >/dev/null
LIBR=test_suite_printf/LIB/libff.a
TESTSDIR=test_suite_printf/tests
if [ ! -f "${LIBR}" ]; then
        printf "${RED}library couldn't be extracted! please check the files or read usage \
in \033[4mhttps://github.com/aalahyan3/ft_printf_test_suite#usage\033[0m${RESET}\n\n"
		exit 1
fi

OUTPUT=""
ORIGINAL=""



total_mandatory=90
correct=0
function test()
{
	local i=$1
	gcc -w ${TESTSDIR}/test${i}.c ${LIBR} -o test 2>/dev/null
	if [[ $? -ne 0 ]]; then
        printf "${RED}Comp. Failed!${RESET}"
        return 1
    fi
	ORIGINAL=$(./test 0)
	OUTPUT=$(./test 1)
	if [[ "$OUTPUT" == "$ORIGINAL" ]]; then
    	printf "${GREEN}%5s" "OK"
		((correct++))
	else
		printf "${RED}%5s" "KO"
	fi
}


counter=1
i=1
categ1=10

nb_tests=$(ls tests/test*.c 2>/dev/null | wc -l)


echo -e "\n${CYAN}=>Category 1: Regular string with no arguments.\n"
printf "${ORANGE}%-12s:\t" "No args"
while (($i <= 10)); do
	test ${counter}
	((i++))
	((counter++))
done
sleep 0.5
i=1
echo -e "\n${CYAN}=>Category 2: Print a character.\n"
printf "${ORANGE}%-12s:\t" "%c"
while (($i <= 10)); do
	test ${counter}
	((i++))
	((counter++))
done
sleep 0.5
i=1
echo -e "\n${CYAN}=>Category 3: Print signed number.\n"
printf "${ORANGE}%-12s:\t" "%d"
while (($i <= 10)); do
	test ${counter}
	((i++))
	((counter++))
done
printf "\n"
sleep 0.5
i=1
printf "\n${ORANGE}%-12s:\t" "%i"
while (($i <= 10)); do
	test ${counter}
	((i++))
	((counter++))
done
sleep 0.5
i=1
echo -e "\n${CYAN}=>Category 4: Print unsigned number.\n"
printf "${ORANGE}%-12s:\t" "%u"
while (($i <= 10)); do
	test ${counter}
	((i++))
	((counter++))
done
sleep 0.5
i=1
echo -e "\n${CYAN}=>Category 5: Print a hexadecimal number\n"
printf "${ORANGE}%-12s:\t" "%x"
while (($i <= 10)); do
	test ${counter}
	((i++))
	((counter++))
done
printf "\n"
sleep 0.5
i=1
printf "\n${ORANGE}%-12s:\t" "%X"
while (($i <= 10)); do
	test ${counter}
	((i++))
	((counter++))
done
sleep 0.5
i=1
echo -e "\n${CYAN}=>Category 6: Print an adress\n"
printf "${ORANGE}%-12s:\t" "%p"
while (($i <= 10)); do
	test ${counter}
	((i++))
	((counter++))
done
sleep 0.5
i=1
echo -e "\n${CYAN}=>Category 7: return value\n"
printf "${ORANGE}%-12s:\t" "ret.val"
while (($i <= 10)); do
	test ${counter}
	((i++))
	((counter++))
done



printf "${RESET}\n\n|${GREEN}${BOLD}"
for ((i = 0; i < ${correct}; i++)); do
    printf "▇"
	sleep 0.01
done
for ((i = ${correct}; i < ${total_mandatory}; i++)); do
    printf "|"
	sleep 0.01
done
printf "${GREEN}| %d %%\tResult %d/%d\n\n" $((correct * 100 / total_mandatory)) ${correct} ${total_mandatory}

if ((correct == total_mandatory)); then
	printf "${GREEN}[Good job] All mandatory part is good\n\n${RESET}"
fi
correct_mandatory=${correct}
printf "${YELLOW}=>>The next tests concerns the bonus part of ft_printf(), Do you want to procceed? (y/n) :"
read option;
if [[ ${option} != "y" && ${option} != "Y" ]]; then
	printf "${CYAN}OK, have a good day :)\n"
	exit 0;
fi


printf "\n${CYAN}=>Running now bonus evaluations...\n" 
sleep 2

i=1
echo -e "\n${CYAN}=>Bonus 2:Any combinations of field minimum width and flags ’# +’"
printf "${ORANGE}%-12s:\t" "# +"
while (($i <= 10)); do
	test ${counter}
	((i++))
	((counter++))
done
sleep 0.5

i=1
echo -e "\n${CYAN}=>Bonus 2: Any combinations of field minimum width and flags ’# +’"
printf "${ORANGE}%-12s:\t" "# +"
while (($i <= 10)); do
	test ${counter}
	((i++))
	((counter++))
done
sleep 0.5

total_bonus=20
bonus_correct=$((correct - correct_mandatory))

printf "\n\n${ORANGE}YOU SUCCEED IN %d OUT OF %d\n\n" ${bonus_correct} ${total_bonus}

# CCCCCC for version 2
# printf "${RESET}Stage Lwahch : next test will test you function in a very strict way. The failure does not mean your function is not good but it will just test how mush you mimiced the original\n${RED}\t\t==>Are you in? (y/n): "
# read option2
PRINTFDIR=ft_printf
LIBDIR=test_suite_printf/LIB
NAME = $(LIBDIR)/libff.a


all:
	@echo "aalahyan says: Just Run ./tester.sh to start the evaluation, dont forget to add x permession to it  or use ~bash tester.sh"

build_test:
	@make -C $(PRINTFDIR)
	@cp $(PRINTFDIR)/libftprintf.a $(LIBDIR)/libff.a
	@make fclean -C $(PRINTFDIR)

clean:
	rm -rf $(NAME)
.PHOENY: clean all buidl_test
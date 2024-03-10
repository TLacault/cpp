SRC			=	./src/main.cpp	\
				./src/myGKrellm.cpp	\
				./src/Window.cpp	\
				./src/update_modules.cpp	\
				./src/module_management.cpp	\
				./src/get_args.cpp	\
				./src/modules/MonitorCore.cpp	\
				./src/modules/HostUserName.cpp	\
				./src/modules/DateTime.cpp	\
				./src/modules/OSKernel.cpp	\
				./src/modules/Memory.cpp \
				./src/modules/CPU.cpp \
				./src/display/display_ui.cpp	\
				./src/display/display_modules.cpp	\
				./src/display/display_date_time.cpp	\
				./src/display/display_host_user_name.cpp	\
				./src/display/display_monitor_core.cpp	\
				./src/display/display_os_kernel.cpp	\
				./src/display/display_cpu.cpp	\
				./src/display/display_memory.cpp	\
				./src/display/display_network.cpp	\


BINARY_NAME	=	 htop-light

CPPFLAGS	=	-I ./include -lncurses

CFLAGS		=	-W -Wall -Wextra -Werror -g -std=c++20

all:
		g++ -o $(BINARY_NAME) $(SRC) $(CFLAGS) $(CPPFLAGS)

clean:
			rm -f /src/*.o
			rm -f *~
			rm -f vgcore.*

fclean:		clean
			rm -f $(BINARY_NAME)
			rm -f *.gcno
			rm -f *.gcda

re:		fclean all

.PHONY: all clean fclean re
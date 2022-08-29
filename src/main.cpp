#include "project.hpp"

int main (int ac, char **av)
{
    std::string help;
    Window window;

    if (ac == 2) {
        help = av[1];
        if (help == "--help") {
            help_display();
            return 0;
        }
    }
    get_args(&window, ac, av);
    myGKrellm(&window);

    return 0;
}
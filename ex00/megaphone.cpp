#include <iostream>

int	main(int argc, char **argv)
{
	int	j = 1;
	int	i;

	while(j < argc)
	{
		i = -1;
		while(argv[j][++i])
			argv[j][i] = std::toupper(argv[j][i]);
		std::cout << argv[j];
		j++;
	}
	if (j == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <iomanip>
# include <string>


class Brain
{
	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain & toCopy);
		Brain & operator=(const Brain & other);

	protected:
		std::string		_ideas[100];

	private:
};

#endif
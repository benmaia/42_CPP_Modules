#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

typedef std::string	string;



class Harl
{
	typedef struct s_comments
	{
		string	comment;
		void	(Harl::*level)(void);
	} t_comment;

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		t_comment comment[4];

	public:
		void	complain(std::string level);
		Harl();
		~Harl();
};

#endif

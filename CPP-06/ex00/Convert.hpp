#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <climits>

typedef enum s_type
{
	CHAR,
	INT,
	FLOAT,
	DEC,
	NONE
}			t_type;

class Convert
{
	public :
		Convert ();
		Convert (const Convert &);
		~Convert ();

		void setType (t_type, const char *, std::string);
		void fillList ();
		void printList ();

		void printChar();
		void printInt ();

		int int_;
		float float_;
		double double_;
		char char_;
		bool wrong;
		bool limit;
		std::string num;
		const char *arg;
		t_type type_;
};

	std::ostream& operator<<(std::ostream &out, Convert&);

#endif
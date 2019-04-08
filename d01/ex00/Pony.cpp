/**
 * File              : Pony.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, bool rainbow, bool unicorn) :
	name(name), color(color), rainbow(rainbow), unicorn(unicorn)
{
	std::cout << "Hello Pony" << std::endl;
	return ;
}

Pony::~Pony(void) {
	std::cout << "Bye Pony" << std::endl;
	return ;
}

void	Pony::draw(void) const {
	std::string	pony = R"pq(
	                        -.
                               |  \
                               |   \
                               F    L
                 |"-._         F    L
                 |  `.`--.     L    |
                 J    `.  `.   |    |   __
                  \     `.  `. J    |.-'_.-
                   \      `.  \ \.-     `-. 
      J".           `.      \  >'          `.
      |  \            `-.    L/       `---.._\
      J   L              `"-/               |
       \  |                J        / .-.   4
        J F                |       | / d8   |
         L\                F         | 8P   J
         J L               |         `-'     `-.
         | |                L  .          .-    )
         | J                |   \        . dP  / 
         J  \               |    `.       `-.-"
          \  >-""""-.      .F      >"--.---._) 
           >"        ""--""        |
          J                        F
          |                        L
          J                        |
           \        L         `.   J
            )       | % |      | eJ" u+L
           d"      d"  '|     :Fd"     4
          P      u$"b.  $r    $*L u@".  F
          $  ?F"" 4L ^F""$   F      zP $
          4F  N    *. %. ^  4     $#  zF
           #r ".    $  $ $  $   $$F :"
           -F  $    ^k Jr@F $   $$$"
            #. F     9$$$9  4
            '$$$          $  *
VK            ^"          3ed$.
                           $$$#
	)pq";
	std::cout << pony << std::endl;
	return ;
}

/*"typedef" and "using" keywords do the same thing
but "using" is better because works clean on templates
+new identifier for existing type
+more readability, less typos
*/

#include <iostream>

typedef std::string text_t;
using text2_t = std::string;

int main(void) {

	text_t sentence1 = "a sentence";
	std::cout << sentence1 << std::endl;

	text2_t sentence2 = "a new sentence";
	std::cout << sentence2 << '\n';

	return 0;
}
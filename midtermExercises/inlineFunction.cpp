/*when function has inline specifier, program doesn't
go there when its called. Instead function goes to call
point. This helps & makes code work faster for small functs.*/
#include <iostream>
using namespace std;

inline void even(int x){
	if (x % 2)
		cout << x << " is an odd number" << endl;
	else 
		cout << x << " is an even number" << endl;
}

int main(){
	int i = 5;
	even(i);
	i += 1;
	even(i);
	return 0;
}
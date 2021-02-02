#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 
void shuffle(int *a,int *b,int *c,int *d){
	int money[4] = {*a, *b, *c, *d};
	
	int r1 = rand() % 4;
	*a = money[r1];
 
	int r2 =rand() % 4; 
	while (r2 == r1) r2 = rand() % 4;
	*b = money[r2];

	int r3 = rand() % 4; 
	while (r3 == r2 || r3 == r1) r3 = rand() % 4;
	*c = money[r3];
	
	int r4 = rand() % 4; 
	while (r4 == r3 || r4 == r2 || r4 == r1) r4 = rand() % 4;
	*d = money[r4];
}
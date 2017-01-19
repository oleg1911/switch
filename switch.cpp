#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;
struct data { 
	char win;
	int lose;
};
struct Fighter { 
	char firstname[20];
	char lastname[20];
	struct data dt; 
};

int main() {
	int fighterCount = 0;
	vector<Fighter> Fighter;
	Fighter.reserve(20); 
	do{
		
		printf("name: ");
		scanf("%s", Fighter[fighterCount].firstname);
		printf("surname: ");
		scanf("%s", Fighter[fighterCount].lastname);
		printf("win: ");
		scanf("%d", &Fighter[fighterCount].dt.win);
		printf("lose: ");
		scanf("%d", &Fighter[fighterCount].dt.lose);
		printf("\nYour result: %s %s, %d win %d lose",
			Fighter[fighterCount].firstname, Fighter[fighterCount].lastname, Fighter[fighterCount].dt.win, Fighter[fighterCount].dt.lose);
		getchar(); getchar();
		++fighterCount;
	} while (fighterCount > 10);

	std::printf << "Delete previous?" << std::endl;
	char answer;
	std::scanf >> answer;
		switch(answer)
{
case 'y':
{
   			std::swap(Fighter[fighterCount - 1], Fighter[fighterCount - 2]);
  			break;
}
break;
case 'n':
{
  					 std::printf << "Error" << std::endl; 
					 break;
}
break;
default:
{
  		 std::printf << "Nepravelne vvedenya" << std::endl;
}
		break;
}
	
	return 0;
}
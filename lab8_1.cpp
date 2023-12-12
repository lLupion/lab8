#include <iostream>
using namespace std;

int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  string got1,got2,got3,got4,got5;
  got1 = "You have received Super Ultra Rare Unit!!!\n";
  got2 = "You have received 5 gems.\n";
  got3 = "You have received 1 gems.\n";
  got4 = "You have received 2000 coins.\n";
  got5 = "You have received very KAK items.\n";
    if(rank == 'S'){
       cout << got1 << got2<< got3 << got4 << got5;
    }if(rank == 'A'){
       cout << got2 << got3<< got4 << got5;
    }if(rank == 'B'){
       cout << got3 << got4 << got5;
    }if(rank == 'C'){
       cout << got4 << got5;
    }if(rank == 'D'){
       cout << got5;
    }
  
  return 0;
}

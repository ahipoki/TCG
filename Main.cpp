#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>

using namespace std;

void swap(int, int);
void selectionSort(int[], int);
void printArray(int[], int);

int main()
{
  int card1 = 0;
  int card2 = 0;
  int card3 = 0;
  int card4 = 0;
  int card5 = 0;
  int card6 = 0;
  int card7 = 0;
  int card8 = 0;
  int card9 = 0;
  int card10 = 0;
  int card11 = 0;
  int card12 = 0;
  int card13 = 0;
  int card14 = 0;
  int card15 = 0;
  int card16 = 0;
  int card17 = 0;
  int card18 = 0;
  int card19 = 0;
  int card20 = 0;
  int card21 = 0;
  int card22 = 0;
  int card23 = 0;
  int card24 = 0;
  int card25 = 0;
  cout<<"Hello! Welcome to a text based card game!"<<endl;
  srand(time(NULL));
  int deck[60];
  int n = sizeof(deck)/sizeof(deck[0]);
  for (int i = 0; i < 60; i++){
    deck[i] = rand()%25+1;
    if (deck[i] == 1){
      while (true){
      	if (card1 <= 4){
	  card1++;
	  return false;
      	}
      	else if (card1 > 4){
	  deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card2 <= 4){
	  card2++;
	  return false;
      	}
      	else if (card2 > 4){
	  deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card3 <= 4){
	  card3++;
	  return false;
      	}
      	else if (card3 > 4){
	  deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card4 <= 4){
	  card4++;
	  return false;
      	}
      	else if (card4 > 4){
	  deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card5 <= 4){
	  card5++;
	  return false;
      	}
      	else if (card5 > 4){
	  deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card6 <= 4){
	  card6++;
	  return false;
      	}
      	else if (card6 > 4){
	  deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card7 <= 4){
	        card7++;
	        return false;
      	}
      	else if (card7 > 4){
	        deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card8 <= 4){
	  card8++;
	  return false;
      	}
      	else if (card8 > 4){
	  deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card9 <= 4){
	  card9++;
	  return false;
      	}
      	else if (card9 > 4){
	  deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card10 <= 4){
	  card10++;
	  return false;
      	}
      	else if (card10 > 4){
	  deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card11 <= 4){
	  card11++;
	  return false;
      	}
      	else if (card11 > 4){
	  deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card12 <= 4){
	  card12++;
	  return false;
      	}
      	else if (card12 > 4){
	  deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card13 <= 4){
	  card13++;
	  return false;
      	}
      	else if (card13 > 4){
	  deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card14 <= 4){
	  card14++;
	  return false;
      	}
      	else if (card14 > 4){
	        deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card15 <= 4){
	        card15++;
	        return false;
      	}
      	else if (card15 > 4){
	        deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card16 <= 4){
	        card16++;
	        return false;
      	}
      	else if (card16 > 4){
	        deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card17 <= 4){
	        card17++;
	        return false;
      	}
      	else if (card17 > 4){
	        deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card18 <= 4){
	        card18++;
	        return false;
      	}
      	else if (card18 > 4){
	        deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card19 <= 4){
	        card19++;
	        return false;
      	}
      	else if (card19 > 4){
	        deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card20 <= 4){
	        card20++;
	        return false;
      	}
      	else if (card20 > 4){
	        deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card21 <= 4){
	        card21++;
	        return false;
      	}
      	else if (card21 > 4){
	        deck[i] = rand()%25+1;
      	}
      }
    }else if (deck[i] == 1){
      while (true){
      	if (card22 <= 4){
	        card22++;
	        return false;
      	}
      	else if (card22 > 4){
	        deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card23 <= 4){
	        card23++;
	        return false;
      	}
      	else if (card23 > 4){
	        deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card24 <= 4){
	        card24++;
	        return false;
      	}
      	else if (card24 > 4){
	        deck[i] = rand()%25+1;
      	}
      }
    }
    else if (deck[i] == 1){
      while (true){
      	if (card25 <= 4){
	        card25++;
	        return false;
      	}
      	else if (card25 > 4){
	        deck[i] = rand()%25+1;
      	}
      }
    }
    //cout<<"Card Number "<<i+1<<": "<<deck[i]<<endl;
  }
  selectionSort(deck, n);
  cout<<"Sorted Array: \n";
  printArray(deck, n);
  return 0;
}

void swap(int *xp, int *yp){
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void selectionSort(int deck[], int n){
  int i, j, min_idx;
  for (int i = 0; i < n-1; i++){
    min_idx = i;
    for (j = i+1; j < n; j++){
      if (deck[j] < deck[min_idx]){
	min_idx = j;
      }
    }
    swap(&deck[min_idx], &deck[i]);
  }
}

void printArray(int deck[], int size){
  int i;
  for (i = 0; i < size; i++){
    cout<<deck[i]<<" ";
  }
  cout<<endl;
}

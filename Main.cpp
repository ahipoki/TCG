#include <iostream>
#include <cstring>

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
  for (int i = 0; i < 60; i++){
    deck[i] = rand()%25+1;
    if (deck[i] == 1){
      if (card1 <= 4){
	card1++;
      }
      else if (card1 > 4){
	deck[i] = rand()%25+1;
      }
    }
    else if (deck[i] == 2){
      if (card2 <= 4){
	card2++;
      }
      else if (card2 > 4){
	deck[i] = rand()%25+1;
      }
    }
    else if (deck[i] == 3){
      if (card3 <= 4){
	card3++;
      }
      else if (card3 > 4){
	deck[i] = rand()%25+1;
      }
    }
    cout<<"Card Number "<<i+1<<": "<<deck[i]<<endl;
  }
}

void swap(int *xp, int *yp){
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void selectionSort(int arr[], int n){
  int i, j, min_idx;
  for (int i = 0; i < n-1; i++){
    min_idx = i;
    for (j = i+1; j < n; j++){
      if (arr[j] < arr[min_idx]){
	min_idx = j;
      }
    }
    swap(&arr[min_idx], &arr[i]);
  }
}

void printArray(int arr[], int size){
  int i;
  for (i = 0; i < size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

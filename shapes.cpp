#include<iostream>
#include<string.h>
using namespace std;

int size;
int i, j, space;
char shape;
char continueProgram;

void displaySquare(int size){
	for (int i=0; i<size ; i++) // each i represents a row (we will have size rows)
	{
		cout << endl; //This adds the space at the end of the row 
		for (int j=0; j < size ; j++) // This writes a character of how many 'size' times.
		{
			cout << "* ";
		}
	}
}

void displayTriangle(int size){
	int space=size-1;
	
	// run loop (parent loop)
    // till number of rows
    for (int i = 0; i < size; i++)
    {
        // loop for initially space,
        // before star printing
        for (int j = 0;j < space; j++)
            cout << " ";
 
        // Print i+1 stars
        for (int j = 0; j <= i; j++)
            cout << "* ";
 
        cout << endl;
        space--;
    }
}

void displayDiamond(int size){
	int space=size-1;
	
	// run loop (parent loop)
    // till number of rows
    for (int i = 0; i < size; i++)
    {
        // loop for initially space,
        // before star printing
        for (int j = 0;j < space; j++)
            cout << " ";
 
        // Print i+1 stars
        for (int j = 0; j <= i; j++)
            cout << "* ";
 
        cout << endl;
        space--;
    }
 
    // Repeat again in reverse order
    space = 0;
 
    // run loop (parent loop)
    // till number of rows
    for (int i = size; i > 0; i--)
    {
        // loop for initially space,
        // before star printing
        for (int j = 0; j < space; j++)
            cout << " ";
 
        // Print i stars
        for (int j = 0;j < i;j++)
            cout << "* ";
 
        cout << endl;
        space++;
    }
}


int main()
{
	do{
		cout<<"Hello, please select the type of the shape to be displayed:\n";
		cout<<"[Option:'S' = Square,'T' = Triangle, 'D' = Diamond] \n";
	  	cin>>shape;
	  	cout<<"Please key in the size of the shape: \n";
	  	cin>>size;
	  	
	  	if(shape=='D'){
	  		displayDiamond(size);
		}
		else if(shape=='S'){
			displaySquare(size);
		}
		else if(shape=='T'){
			displayTriangle(size);
		}
		else{
			cout<<"Shape not found! \n";
		}
		
		cout<<endl;
		cout<<"Do you want to display another shape? (y/n): \n";
		cin>>continueProgram;
		
	}while(continueProgram=='y'||continueProgram=='Y');
	
 	return 0;
}
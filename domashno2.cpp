#include<iostream>
using namespace std;
int main()
{
	int masiv[3][3], sum=0;
	
	  
	  for(int j=0; j<3; j++)
	  {
	  	 for(int i=0; i<3; i++)
	  	 {
	  	 	cin>> masiv[j][i];
		   }
	  }
	  for(int j=0; j<3; j++)
	  {
	  	 for(int i=0; i<3; i++)
	  	 {
	  	    if(i+j==3-1)
			  {
			    sum+=masiv[j][i];
			  	
			  }
			
		   }
	  }
	        cout<< sum;
}

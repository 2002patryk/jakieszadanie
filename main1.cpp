#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class ciagi
{
	public:
	int t[];
	void oblicz();
	
};

void ciagi::oblicz()
{
	ifstream plik;
	plik.open("c:\\ciagi.txt");
	
	string liczba;
	int dlugosc;
	int dlugoscCiagu;
	int roznica;
	int oroznica;
	
	while(!plik.eof())
	{
 		plik >> dlugosc;
 	for (int i=0; i<dlugoscCiagu; i++)
 	{
   		plik >> liczba;
   	    t.push_back(liczba);
   			 if (i==1) oroznica = t[1]-t[0];
   			 if (i>1) 
  		 {
      	 int roznica = t[i] - t[i-1];
      	 if (roznica != oroznica)
    	  {
          cout << "zly ciag";
       	  }
   		 }
 	}
	}	
	
	if(roznica==oroznica)
	{
		t.push_back(roznica);
		
		ofstream zapisz;
		zapisz.open("c:\\ciagi1.txt");
		zapisz<<t;
		zapisz.close();
	}
}

int main() {
	
	ciagi wywolaj;
	wywolaj.oblicz();
	return 0;
}

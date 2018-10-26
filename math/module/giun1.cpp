/*
Scrivere un programma C++ che, letta da input una sequenza di numeri interi
terminata dal tappo (o valore sentinella) 5
stampi:
- la stringa “NESSUNO”
    se nella sequenza non è presente alcun numero che sia un multiplo di 5
- la stringa “ALMENO 1”
    altrimenti.
ESEMPI:
  Input: -3 42 37 28 5
  Output: “NESSUNO”
  Input: -3 40 37 2 -8 5
  Output: “ALMENO 1”
  Input: 5
  Output: “NESSUNO”
 */
#include<iostream>
using namespace std;
int main ()
{
	int n = 0;
	while (n != 5)
	{
		cin >> n;
		if ( n % 5 == 0)
		{
			cout << "ALMENO 1";
			return 0;
		}	
	}
	
	cout << "NESSUNO";
	return 0;
}

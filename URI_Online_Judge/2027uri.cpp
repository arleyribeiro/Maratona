#include <bits/stdc++.h>

using namespace std;

int GCDsimp(int num, int den) {
	
	if (den > 0)
		return GCDsimp (den, num % den);
	
	return num;
}

int main() {
	int num, den, apostas[110], cont=-1;
	while (scanf("%d %d",&num,&den)==2) {

		 apostas[++cont] = GCDsimp(num,den);
		 if( apostas[cont] > 5)
			cout << "Noel" << endl;
		 else
			cout << "Gnomos" << endl;
	}
	for (int i=cont; i>=0; i--) {
		cout << apostas[i] << " ";
	}
	cout<<endl;
	return 0;
}
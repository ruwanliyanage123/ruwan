#include <iostream>

using namespace std;

void ans(int n,int m){
	
	float N[m+1][n+m+1];
	float A[m][n],b[m],c[n];
	cin >> m;
	cin >> n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> A[i][j];
		}
	}
	for(int k=0;k<m;k++){
		cin >> b[k];
	}
	for(int l=0;l<n;l++){
		cin >> c[l];
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			N[i][j]=A[i][j];
		}
		N[i][n+i]=1;
		
	}
	for(int k=0;k<n;k++){
		N[m][k]=b[k];
	}
	N[m][n+m]=1;
	for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << ' ';
        }
        cout << "\n";
        //std::cout << std::endl;
    }
    for(int i=0;i<m;i++)
	{
		cout << b[i] << ' ';
		cout << "\n";
		
	}
	for (int i = 0; i < m+1; ++i)
    {
        for (int j = 0; j < m+n+1; ++j)
        {
            std::cout << N[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    
    
}

int main(){
	int n,m;
	/*float A[m][n],b[m],c[n];
	cin >> m;
	cin >> n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> A[i][j];
		}
	}
	for(int k=0;k<m;k++){
		cin >> b[k];
	}
	for(int l=0;l<n;l++){
		cin >> c[l];
	}*/
	
	ans(n,m);
}int main(){
	int n,m;
	/*float A[m][n],b[m],c[n];
	cin >> m;
	cin >> n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> A[i][j];
		}
	}
	for(int k=0;k<m;k++){
		cin >> b[k];
	}
	for(int l=0;l<n;l++){
		cin >> c[l];
	}*/
	
	ans(n,m);int main(){
	int n,m;
	/*float A[m][n],b[m],c[n];
	cin >> m;
	cin >> n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> A[i][j];
		}
	}
	for(int k=0;k<m;k++){
		cin >> b[k];
	}
	for(int l=0;l<n;l++){
		cin >> c[l];
	}*/
	
	ans(n,m);
}int main(){
	int n,m;
	/*float A[m][n],b[m],c[n];
	cin >> m;
	cin >> n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> A[i][j];
		}
	}
	for(int k=0;k<m;k++){
		cin >> b[k];
	}
	for(int l=0;l<n;l++){
		cin >> c[l];
	}*/
	
	ans(n,m);
}

#include <iostream>

using namespace std;
void mattix(int n, int m){
    float A[m][n];
    float b[m];
    float c[n];
    float x[n];
    int u=m+1,v=n+m+2;
    float tab[u][v];
    int i,j;

    cout << "Enter the matrix A : ";
    for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> A[i][j];
		}
	}

	// another
	cout << "Enter the matrix b : ";
	for(int i=0;i<m;i++){
        cin >> b[i];
	}
	// another
	cout << "Enter the matrix c : ";
	for(int i=0;i<n;i++){
        cin >> c[i];
	}
	// make tabulator

	for(int i=0;i<m+1;i++){
        for(int j=0;j<n+m+2;j++){
            tab[i][j]=0;
        }
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			tab[i][j]=A[i][j];
		}
		tab[i][n+i]=1;

	}
	for(int k=0;k<n;k++){
		tab[m][k]=c[k];
	}
	tab[m][n+m]=1;

	for(int i=0;i<m;i++){
        tab[i][n+m+1]=b[i];
	}for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			tab[i][j]=A[i][j];
		}
		tab[i][n+i]=1;

	}
	for(int k=0;k<n;k++){
		tab[m][k]=c[k];
	}
	tab[m][n+m]=1;

	for(int i=0;i<m;i++){
        tab[i][n+m+1]=b[i];
	}
	bool isNeg=true;

    while(isNeg){
    isNeg=false;
    i=m;
    for(j=0;j<n+m+1;j++){
        if(tab[i][j]<0){
            isNeg=true;
            break;
        }
    }
    //cout << isNeg;
    //chose pivot
    if(isNeg==true){
        //chose pivot column
        i=m;
        int min=0;
        for(j=1;j<n+m+1;j++){
            if(tab[i][j]<tab[i][min])
                min=j;
        }
        int pivotColumn=min;
        //cout << "pivot column: " << pivotColumn << endl;

        //chose pivot raw

        j=n+m+1;
        int mini=0;

        for(i=0;i<m;i++){
            if(tab[i][j]/tab[i][pivotColumn]<0){
                continue;
            }
            else if(tab[i][j]/tab[i][pivotColumn] <= tab[mini][j]/tab[mini][pivotColumn] || tab[mini][j]/tab[mini][pivotColumn]<0 )
                mini=i;
        }
        int pivotRaw=mini;
        //cout << "pivot raw: " << pivotRaw << endl;

        //pivot value raw change to 1

        float pivotValue= tab[pivotRaw][pivotColumn];


        i=pivotRaw;
        for(j=0;j<n+m+2;j++){
            //cout << 1;
            tab[i][j]=tab[i][j]/pivotValue;
        }
        //print tab
        for(i=0;i<u;i++){
            for(j=0;j<v;j++){
                cout<< tab[i][j] <<" ";
        }
        cout<<"\n";
        }

        //change value to 0 pivot column



        for(i=0;i<m+1;i++){
            if(i!=pivotRaw){
                float tem=tab[i][pivotColumn];
                for(j=0;j<n+m+2;j++){
                    tab[i][j]=tab[i][j]-tab[pivotRaw][j]*tem;
                }
            }
        }
        cout << "\n";
        //print tab
        for(i=0;i<u;i++){
            for(j=0;j<v;j++){
                cout<< tab[i][j] <<" ";
        }
        cout<<"\n";
        }

        cout<< "\n";

        }


    }
    //print max values and other values

    cout << "Max value : " << tab[u-1][v-1] << endl;
    for(i=0;i<n;i++){
        x[i]=0;
    }
    for(j=0;j<n;j++){
        bool isBasis=true;
        int cou=0;
        int raw;

        for(i=0;i<m+1;i++){
            if(tab[i][j]!=0 && tab[i][j] !=1){
                isBasis=false;
                break;
            }
            else if(tab[i][j]==1){
                if(cou<1){
                    cou++;
                    raw=i;
                }
                else{
                    break;
                    isBasis=false;
                }
            }
        }
        if(isBasis){
            x[j]=tab[raw][n+m+1];

        }

    }
    cout<< "Variable values: " <<endl;
    for(i=0;i<n;i++){
        cout<< " " <<"x["<<i<<"] : "<< x[i] <<endl;
    }


}




int main(){
	int n,m;
	cout << "Enter number of raws : ";
	cin >> m;
	cout << "Enter number of coloums : ";
	cin >> n;
	mattix(n,m);
	//fristly enter row and colum of matrix A and after enter A b and c matrix.


}

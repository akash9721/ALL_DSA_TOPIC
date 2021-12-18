 #include<bits/stdc++.h>
 using namespace std;
 void countfrequenciesEfficient(int a[],int n)
 {
            for (int i = 0; i < n; i++) {
	            a[i]--;
	        }

	        for (int i = 0; i < n; i++) {
	            a[a[i] % n] += n;
	        }

	        for (int i = 0; i < n; i++) {
	            cout<<(a[i] / n)<<" ";

	           // a[i] = a[i] % n + 1;
	        }
     }

	    int main()
	    {
	        int a[] = { 2, 3, 3, 2, 5 };
	        int n=sizeof(a)/sizeof(a[0]);
	        countfrequenciesEfficient(a,n);
	    }


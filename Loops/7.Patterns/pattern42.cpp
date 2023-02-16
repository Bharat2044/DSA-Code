/*
n = 5
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    //upper part
    for(int i=1; i<=n; i++) {
        //left side star
        for(int j=1; j<=n-i+1; j++)
            cout << "* ";
            
        //space
        for(int s=1; s<=2*i-2; s++)
            cout << "  ";
            
        //right side star
        for(int j=1; j<=n-i+1; j++)
            cout << "* ";
        cout << endl;
    }
    
    //lower part
    for(int i=n; i>=1; i--) {
        //left side star
        for(int j=1; j<=n-i+1; j++)
            cout << "* ";
            
        //space
        for(int s=1; s<=2*i-2; s++)
            cout << "  ";
            
        //right side star
        for(int j=1; j<=n-i+1; j++)
            cout << "* ";
        cout << endl;
    }
    
    return 0;
}

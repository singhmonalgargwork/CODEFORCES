#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a[7];
        int sum = 0;

        for(int i = 0; i < 7; i++){
            cin >> a[i];
            sum += a[i];
        }

        int maxVal = a[0];
        for(int i = 1; i < 7; i++){
            if(a[i] > maxVal){
                maxVal = a[i];
            }
        }

        int result = 2 * maxVal - sum;

        cout << result << endl;
    }

    return 0;
}
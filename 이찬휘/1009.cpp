#include <iostream>
#include <cstring>

#define SIZE 11
using namespace std;

int arr[SIZE];
int ans = 0;
int ret = 0;
int a ,b , t;


bool chk(){

    for(int i = 2 ; i< 10 ; i++){
        if(arr[i] == arr[1]){
            arr[i] = -1;
            return true;
        }
    }

    return false;

}

int main(){
    int test;
    cin >> test;

    while(test--){

        memset(arr ,  -1 , sizeof(arr));

        cin >> a >> b;

        int t_init = a;

        //10의 배수인 경우
        if(t_init % 10 == 0){
            cout << 10 << endl;
            continue;
        }
            
        else{
            for(int i = 1 ; i <= b ; i++){
                t = a;
                ret = t % 10;
                a = (ret * t_init)%10;
                arr[i] = ret;

                if(chk()) {
                        break;
                }
            }
        }

        int cnt=0;
        for(int i = 1 ; i < 10 ; i++){

            if(arr[i] != -1){
                cnt ++;
            }
            else
                break;
            //cout << "\narray "<< i << "st : "<< arr[i] << "\n";
        }
            
        //cout << cnt <<"\n";

        if(cnt != 0){
            if(b%cnt == 0)
                ans = arr[cnt];
            else
                ans =arr[b%cnt];
        }
       
            cout << ans <<"\n";

    }

    return 0;


}
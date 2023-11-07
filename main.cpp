 #include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    vector<int> v = {5,6,7,7,8,8,8,10};
    
    int lowerBound = v.size(), upperBound = -1,target = 8;
    int l = 0, r = v.size()-1;

    while(l<=r){
        int mid = (r+l)>>1;
        if( v[mid] >= target){
            r = mid-1;
            lowerBound = min(lowerBound,mid);
        }else{
            l = mid+1;
        }
    }

    cout<<"lower bound:"<<lowerBound<<endl;
    
    l = 0, r = v.size()-1;
    while((l<=r) && lowerBound != v.size()){
        int mid = (r+l)>>1;
        if( v[mid] <= target){
             l = mid+1;
             upperBound = max(upperBound,mid);
        }else{
           r = mid-1;
        }
    }

    cout<<"upper bound:"<<upperBound<<endl;
 
    return 0;
}




















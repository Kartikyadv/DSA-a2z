Q-2 2nd Largest Element in the Array

vector<int> getSecondOrderElements(int n, vector<int> a) {
    //THE MMOST OPTIMAL ONE
    vector<int> ans;
    int largest = a[0];
    int slargest = -1;
    int smallest = a[0];
    int ssmallest = 10000;
    for(int i=1;i<a.size();i++){
        if(a[i]>largest){
            slargest = largest;
            largest = a[i];
        }
        else if(a[i]<largest && a[i]>slargest){
            slargest = a[i];
        }
    }
    ans.push_back(slargest);
    for(int i=0;i<a.size();i++){
        if(a[i]<smallest){
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i]>smallest && a[i]<ssmallest){
            ssmallest = a[i];
        }
    }
    ans.push_back(ssmallest);
    return {slargest,ssmallest};
}

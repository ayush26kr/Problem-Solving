int migratoryBirds(vector<int> arr) {
    //using map
    int max_count=0;
    int max_index=0;
    map<int,int>mp;
    int n=arr.size();
    for(int i=0;i<n;i++)  //inserting elements to map
    {
        mp[arr[i]]++;
    }
    for(auto &i:mp)
    {
        if(max_count<i.second)
        {
            max_count=i.second;
            max_index=i.first;
            
        }
        
    }
    return max_index; 
}

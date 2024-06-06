
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;class Taxi {
public:
    int getDropTime(){
        return dropTime;
    }
    void setDropTime(int dropTime){
        this->dropTime = dropTime;
    }
    int getTaxiId() 
    {
        return taxiId;
    }
    void setTaxiId(int taxiId) 
    {
        this->taxiId = taxiId;
    }
    void setCustomerId(int customerId) 
    {
        this->customerId = customerId;
    }
    int getCustomerId() 
    {
        return customerId;
    }
    void setPickupLocation(char pickupLocation) 
    {
        this->pickuplocation = pickupLocation;
    }
    char getPickupLocation() 
    {
        return pickuplocation;
    }
    void setDropLocation(char dropLocation) 
    {
        this->dropLocation = dropLocation;
    }
    char getDropLocation() 
    {
        return dropLocation;
    }
    void setPickupTime(int pickupTime) 
    {
        this->pickupTime = pickupTime;
    }
    int getPickupTime() 
    {
        return pickupTime;
    }
    void setEarnings(int earnings) 
    {
        this->earnings = earnings;
    }
    int getEarnings() 
    {
        return earnings;
    }
    void setCurrentLocation(char currentLocation) 
    {
        this->currentLocation = currentLocation;
    }
    void track() {
        // Track the taxi
    }

    private:
     char currentLocation='A';
     int customerId;
     int taxiId;
     char pickuplocation;
     char dropLocation;
     int pickupTime;
     int dropTime;
     int earnings;  
};
string booking(char pickupLocation,char dropLocation, int pickupTime)
{
    vector<Taxi>taxiList;
    int taxiLimit=4,idGenerator=1;
    vector<Taxi>bookHistory;
    if(taxiList.size()<taxiLimit)
    {
        taxiList.push_back(Taxi());
    }
    int min=INT_MAX;
    Taxi taxiReady = nullptr;
    for(Taxi t:taxiList)
    {
        if(pickupTime>=t.getDropTime()&&abs(t.getPickupLocation()-pickupLocation)<min)
        {
            taxiReady=t;
            min=abs(t.getPickupLocation()-pickupLocation);
        }
        if(taxiReady!=nullptr)
        {
            taxiReady.setCustomerId(idGenerator++);
            taxiReady.setPickupLocation(pickupLocation);
            taxiReady.setDropLocation(dropLocation);
            taxiReady.setCurrentLocation(dropLocation)
            taxiReady.setTaxiId(find(taxiList.begin(),taxiList.end(),taxiReady)-taxiList.begin());
            taxiReady.setPickupTime(pickupTime);
            taxiReady.setDropTime(pickupTime+abs(dropLocation-pickupLocation));
            taxiReady.setEarnings(abs(dropLocation-pickupLocation)*(100+(10*10)));
        }
    }



}
void solve()
{
    
    bool loop=true;

    while(loop)
    {
        cout<<"Choose Any one\n 1. Book Taxi \n 2. Get Taxi Details \n  3. Exit\n";  
        int n;
        cin>>n;
        switch(n)
        {
            case 1:
            {
                // Taxi t;
                // t.setTaxiId(idGenerator);
                // idGenerator++;
                char pickupLocation,dropLocation;
                int pickupTime;
                cout<<"Enter Pickup Location\n";
                cin>>pickupLocation;
                // t.setPickupLocation(pickupLocation);
                cout<<"Enter Drop Location\n";
                cin>>dropLocation;
                // t.setDropLocation(dropLocation);
                cout<<"Enter Pickup Time\n";
                cin>>pickupTime;
                // t.setPickupTime(pickupTime);
                // taxi.push_back(t);
                break;
            }
            case 2:
            {
                cout<<"Enter Taxi Id\n";
                // cin>>taxiId;
                // for(int i=0;i<taxi.size();i++)
                // {
                //     if(taxi[i].getTaxiId()==taxiId)
                //     {
                //         cout<<"Taxi Id: "<<taxi[i].getTaxiId()<<endl;
                //         cout<<"Customer Id: "<<taxi[i].getCustomerId()<<endl;
                //         cout<<"Pickup Location: "<<taxi[i].getPickupLocation()<<endl;
                //         cout<<"Drop Location: "<<taxi[i].getDropLocation()<<endl;
                //         cout<<"Pickup Time: "<<taxi[i].getPickupTime()<<endl;
                //         cout<<"Drop Time: "<<taxi[i].getDropTime()<<endl;
                //         cout<<"Earnings: "<<taxi[i].getEarnings()<<endl;
                //     }
                // }
                break;
            }
            case 3:
            {
                loop=false;
                cout<<"Exiting\n";
                break;
            }
            default:
            break;
        
        }
    }
    

}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
    #endif
  int t=1;
  //cin>>t;
  while(t--){
    solve();
  }
  return 0;

}


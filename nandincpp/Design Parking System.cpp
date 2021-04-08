class ParkingSystem {
    vector<int> v;
public:
    ParkingSystem(int big, int medium, int small) 
    {
        v.resize(3, 0);
        //v.push_back(big, medium, small);
        v[0] = big;
        v[1] = medium;
        v[2] = small;
    }
    
    bool addCar(int carType) 
    {
        if(v[carType - 1] > 0)
        {
            v[carType - 1]--;
            return 1;
        }
        return 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
/**
 * 2187. Minimum Time to Complete Trips
 * https://leetcode.com/problems/minimum-time-to-complete-trips/description/
*/
class Solution {
public:
    #define ll long long

    /**
     * Calculamos la cantidad de viajes
     * Y si es major a la cantidad de viajes totales
    */
    bool f(vector<int>& v,int k,ll m) {
        
        ll t=0;
        
        // Calculate trip
        for(auto x:v) {
            
            if(t>=k)
            break;
            t+=m/x;
        }
        return t>=k;
    }

    ll minimumTime(vector<int>& v, int k) {
        
        ll l=1,m,r=1ll * (*max_element(v.begin(),v.end())) * k,ans;
        
        while(l<=r) {
            m=l+(r-l)/2;
            
            if(f(v,k,m)) {
                // Actualizamos nuestra respuesta
                ans=m;
                r=m-1;
            }
            else 
                l=m+1;
        }
        // Repuesta
        return ans;
    }
};

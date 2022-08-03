// 729. My Calendar I
// Difficulty: Medium

class MyCalendar {
public:
    vector <pair<int,int>> calRange;
    
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(int i=0; i<calRange.size(); i++) {
            // When start is between a range
            if(start>=calRange[i].first && start<calRange[i].second) {
                return false;
            }
            // When end is between a range
            else if(end>calRange[i].first && end<calRange[i].second) {
                return false;
            }
            // When start and end are subset of range
            else if(start<=calRange[i].first && end>=calRange[i].second) {
                return false;
            }
        }
        // When no double booking is not there
        calRange.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */

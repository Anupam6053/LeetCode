class MyCalendar {
public:
    // Arrays to store the start and end times of booked events
    vector<int> startTimes;
    vector<int> endTimes;

    // Function to book a new event
    bool book(int start, int end) {
        // Loop through all the existing bookings
        for (int i = 0; i < startTimes.size(); i++) {
            // Check if the new event overlaps with an existing one
            if (start < endTimes[i] && end > startTimes[i]) {
                return false; // Overlap found, booking is not allowed
            }
        }
        // No overlap found, add the new booking
        startTimes.push_back(start);
        endTimes.push_back(end);
        return true; // Successfully booked
    }
};

#ifndef needmoreclassroomform_hpp

class NeedMoreClassRoomForm : public Form {
private:
    int numberOfClassroomsNeeded;

public:
    NeedMoreClassRoomForm() : Form("Need More Classroom Form"), numberOfClassroomsNeeded(0) {}

    void setNumberOfClassroomsNeeded(int count) {
        numberOfClassroomsNeeded = count;
    }

    void fillForm(const std::string& data) {
        
    }

    void execute() {
        
    }
};
#endif
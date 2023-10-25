class Professor : public Staff {
public:
    Professor(const std::string& name) : name(name) {}

    void createCourse() {
        std::cout << "Professor " << name << " has created a new course." << std::endl;
    }

    std::string getName() const {
        return name;
    }

private:
    std::string name;
};

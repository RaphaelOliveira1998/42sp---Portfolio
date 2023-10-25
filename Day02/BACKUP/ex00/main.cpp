class LinkablePart {
public:
    virtual void execute(float p_pression) = 0;
};

class Wheel {
public:
    void executeRotation(float p_force);
};

class Gear {
public:
    int demultiplier;
};

class GearLever : public Singleton<GearLever> {
public:
    std::vector<Gear> geras;
    int level;
    void change();
    Gear* activeGear();
};

class Transmission {
public:
    std::vector<Wheel*> wheels;
    void activate(float p_force);
};

class Crankshaft {
public:
    Transmission* transmission;
    void receiveForce(float _volume);
};

class ExplosionChamber {
public:
    Crankshaft* crankshaft;
    void fill(float p_volume);
};

class Injector : public LinkablePart {
public:
    ExplosionChamber* chamber;
    void execute(float p_pression);
};

class Motor {
public:
    Injector injector;
    ExplosionChamber chamber;
    Crankshaft crankshaft;
    void connectToTransmission(Transmission* p_transmission);
};

class Pedal {
public:
    LinkablePart* target;
    void setTarget(LinkablePart* p_part);
    void use(float p_pression);
};

class Direction {
public:
    std::vector<Wheel> wheels;
    void turn(float p_angle);
};

class DAE {
public:
    Direction* direction;
    float force;
    void use(float p_angle);
};

class SteerWheel {
public:
    DAE* dae;
    void turn(float p_angle);
};

class Brake {
public:
    Wheel* wheel;
    void execute(float p_force);
    void attackWheel(Wheel* p_wheel);
};

class BrakeController : public LinkablePart {
public:
    std::vector<Brake> brakes;
    void execute(float p_pression);
};

class Cockpit {
public:
    Pedal pedal;
    SteerWheel steerWheel;
    GearLever gearLever;
};

class Electronics {
public:
    DAE dae;
};

class Car {
public:
    BrakeController brakeController;
    Direction direction;
    Transmission transmission;
    Motor motor;
    Electronics electronics;
    Cockpit cockpit;
};


//https://www.canva.com/design/DAFxzQUSI_A/f_kc6n6ScAFVm_8plFEvwA/edit?utm_content=DAFxzQUSI_A&utm_campaign=designshare&utm_medium=link2&utm_source=sharebutton
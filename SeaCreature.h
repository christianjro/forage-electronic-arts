#pragma once

#include <vector>

// ----------------------------------------------

class Locomotion {
    public:
        virtual void move() = 0;
};

class LocomotionSwim {
    public:
        void move() override;
};

class LocomotionCrawl {
    public:
        void move() override;
};

class LocomotionStationary {
    public:
        void move() override;
};

// ----------------------------------------------

class Actions {
    public:
        virtual void act() = 0;
};

class ActionBlowBubble {
    public:
        void act() override;
};

class ActionChangeColor {
    public:
        void act() override;
};

class ActionPuffUp {
    public: 
        void act() override;
};

// ----------------------------------------------

class Resources {
    public:
        virtual void collect() = 0;
};

class ResourcePearl {
    public:
        void collect() override;
};

class ResourceShell {
    public:
        void collect() override;
};

class ResourceFishFillet {
    public:
        void collect() override;
};

// ----------------------------------------------

class SeaCreature {
    public:
        void move();
        void act();
        void collect_resources();
    private:
        std::unique_ptr<Locomotion> locomotion;
        std::vector<Action> actions;
        std::vector<Resource> contained_resources;
};

#endif
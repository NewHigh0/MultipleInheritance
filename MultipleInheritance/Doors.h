#pragma once

class Doors {
protected:
    int doorCount;
    bool isLocked;
    bool hasKeylessEntry;

public:
    Doors(int count = 4, bool keyless = true)
        : doorCount(count), isLocked(true), hasKeylessEntry(keyless) {}

    void lock() { isLocked = true; }
    void unlock() { isLocked = false; }
    bool getLockStatus() const { return isLocked; }

    int getDoorCount() const { return doorCount; }
    bool getKeylessStatus() const { return hasKeylessEntry; }

    void setDoorCount(int count) { doorCount = count; }
    void setKeylessEntry(bool status) { hasKeylessEntry = status; }
};
#include "Angel.h"
#include "state.h"
#include "level.h"

class Game{
private:
    void update(State& state, float t, float dt);
    State interpolate(const State& current, const State& previous, const float alhpa);
    void render(const State& state);
    void gameLoop();
    void initialize();
    void loadLocalLevel(Level level);
    void exitToMainMenu();
public:
    void start();
};

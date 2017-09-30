// Basic game class to control flow
// by Randy on 9/24/17

#pragma once

class Game
{
public:
	Game();
	~Game();

	void Initialize();
	void Update(double dt);
	void Shutdown();

	void Exit();
	bool IsExiting() const;

private:
	bool m_exit;
};


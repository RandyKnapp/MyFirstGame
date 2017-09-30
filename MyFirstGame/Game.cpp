#include "stdafx.h"
#include "Game.h"

Game::Game()
	: m_exit(false)
{
}

Game::~Game()
{
}

void Game::Initialize()
{

}

void Game::Update(double dt)
{

}

void Game::Shutdown()
{

}

void Game::Exit()
{
	m_exit = true;
}

bool Game::IsExiting() const
{
	return m_exit;
}

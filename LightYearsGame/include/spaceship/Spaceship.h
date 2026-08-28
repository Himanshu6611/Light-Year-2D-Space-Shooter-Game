#pragma once
#include "framework/Actor.h"
#include "gameplay/HealthComponent.h"
namespace ly
{
	class Spaceship : public Actor
	{
	public:
		Spaceship(World* owningWord, const std::string& texturePath = "");
		virtual void Tick(float deltaTime) override; //void doesnot return a value
		void SetVelocity(const sf::Vector2f& newVel);
		sf::Vector2f GetVelocity() const {return mVelocity;}
		virtual void Shoot(); //it do nothing but provide the template
		virtual void BeginPlay() override;
		virtual void ApplyDamage(float amt) override; //to handel runtime error
		HealthComponent& GetHealthComp() { return mHealthComp; }
	private:
		void Blink();

		void UpdateBlink(float deltaTime);

		virtual void OnHealthChanged(float amt, float health, float maxHealth);//virtual function is member of the base class
		virtual void OnTakenDamage(float amt, float health, float maxHealth);
		void Blow();
		virtual void Blew();
		sf::Vector2f mVelocity;
		HealthComponent mHealthComp;
		
		float mBlinkTime;
		float mBlinkDuration;
		sf::Color mBlinkColorOffset;
	};
}
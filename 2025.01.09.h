
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class HELLO_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	
	AMyActor();

protected:
	virtual void BeginPlay() override;

public:	
    UPROPERTY()
    FVector2D start;

    UPROPERTY()
    int32 evCnt;

    UPROPERTY()
    float totDist;

    UFUNCTION()
    void move();

    UFUNCTION()
    int32 step();

    UFUNCTION()
    float distance(FVector2D first, FVector2D second);

    UFUNCTION()
    int32 createEvent();
};

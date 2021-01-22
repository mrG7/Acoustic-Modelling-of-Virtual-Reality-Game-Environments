# Project Descrption

## Wwise Plugin Development

Using the Wwise SDK developed by Audiokinetic, information passed in by the audio engine will be used to model information about any given space within a game environment. Acoustic spaces will be defined as a Volume represented by the audio engine. Game Objects within that volume will be identified and surfaces can be given acoustic properties or have their already existing acoustic properties removed \(Collision boxes are already existing acoustic properties determined by the game engine\). The plugin will take acoustic metrics into calculation to produce a baseline model and will then allow for a designer to adjust these metrics accordingly to decide how any specific environment should sound.

The purpose of this plugin is to give game engine designers the ability to accurately model a space acoustically, for video games or other applications. It will also be used to allow audio designers to adjust acoustic spaces as necessary to create more immersive or specifically crafted experiences for players.

## Acoustic Calculations and Modeling Techniques

The core of this project is the ability for accurate acoustic calculations to be taken about any given sound source and receiver as well as the manipulation of the acoustic environment. There are many different factors that go into realistic acoustic definitions of any given space. The primary variables addressed in this project will be:

* Absorption coefficient
  * The numerical representation of how much sound is absorbed by a material
  * Intuitively used by the human ear to determine a particular surface type 
* Sound Intensity
  * The numerical representation of a sound wave's physical mechanics
  * Used to represent how a sound wave will move within a physical medium 
* Initial Time Delay Gap
  * The time between the direct sound \(no interruption between listener and source\) and any number of reflections \(time will noticeably grow as the reflection number increases\)
  * Used to determine the perceived delay and amount of volumetric space in a room
* Frequency of Sound Wave
  * Number of cycles per second of a sound wave
  * Critical metric in representing sounds 
* Acoustic Intimacy
  * The perceived feeling of being close to the sound source
* Loudness 
  * The perceived listening volume \(dB\)
  * dB SPL with its corresponding weighting curves will be used as methods of measuring
    * dB\(A\): Equal distribution curve meant to represent average human hearing
    * dB\(C\): Weighted towards lower frequencies to represent what humans hear for loud sounds
    * dB\(Z\): Zero weighting. Represents true sound pressure level measurement 
* Sound Path Length
  * The distance of the sound as it moves from source to decay below a set threshold of hearing
* Angle of Incidence
  * Angle of source ray as it approaches any reflection point
* Angle of Reflection
  * Angle of reflected ray as it leaves the reflection point
* Geometric Dimensions of the acoustic volume
  * The physical representation of the acoustic space
  * This does not measure 
* Sound Field
  * The regions of space within with a sound wave propagates
  * Though not an adjustable parameter, is helpful in determining parts of where a sound is within a space

Modeling will be done using raycasting from a sound source in a spherical pattern. Accuracy can be adjusted to produce any number of rays. Performance metrics will be taken per ray cast to determine resources required for each accuracy level.  Emission type will also be used to determine the nature of the reflected sound \(point source, line source, impeded variations of the aforementioned\).

## Binaural Listening Considerations

Modeling the acoustics of a space relative to a source is only important if a listener will be present to hear it. Binaural encoding is done using a minimum of 4 channel audio mixes representing:

* Omnidirectional perception: omnidirectional listening where no direction can be discerned
* X-axis Perception: directional audio heard using a cardioid pattern facing infinity and negative infinity on the x-axis
* Y-axis Perception: directional audio heard using a cardioid pattern facing infinity and negative infinity on the y-axis
* Z-Axis Perception: directional audio heard using a cardioid pattern facing infinity and negative infinity on the z-axis

This represents first-order ambisonics. Using the acoustic models, a designer can determine how a sound will be heard using binaural encoding techniques. This is done using the audio engine and will not be written into the project.

Binaural perception is a common design technique within video games and is essentially mandatory for virtual reality environments. Binaural listening is determined using a Head-Related Transfer Function. This is used as a robust calculation for how a sound will be heard by the human ear more accurately.  






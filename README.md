Audio Stream Partitioner (ASP)

these are the drivers for an external soundcard i plan on building. i may or may not include additional documentation of the project here. 

pretty much all this is supposed to do is take two digital audio signals (for now it only takes files as input) and compress them into a single signal which can be decoded by the external soundcard.

since it's intended for DJ-ing, i am considering implementing it as a plugin for the program Mixxx (https://github.com/mixxxdj/mixxx) that works like this:
- override the *playback* of the track being queued and the track being played
- encode it such that it goes to the headphone output of the secondary soundcard
- encode the currently playing track to the speaker output

if only one track is being played back (to speaker or headphones) simply compress it with a silent signal such that the other channel is not populated with erroneous output.

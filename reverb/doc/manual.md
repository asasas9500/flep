<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<link rel="stylesheet" href="normalize.css">
<link rel="stylesheet" href="style.css">
<title>User Manual</title>
</head>
<body>

Reverb patch\
User Manual
====================

## Overview

This patch adds the reverb effect that is present in PSX versions of Tomb Raider.

## Description

The room where the camera is supplies a preset, which is a set of values that define the reverb characteristics.
This preset is global, that is, it is assigned to all sounds, except the sounds that have N flag set, since presets are never assigned to them.
In other words, they never show reverb effect.

In addition, if any menu is active, no preset is assigned to the sounds.
The menus in the Title are not considered menus for the purposes of this patch.

This procedure is repeated at every game frame, continuously.

## Padding

In order to avoid cutoff of the reverb effect, all sounds that do not have L flag set are padded at the end with one second of silence.

## Modes

A mode tells the way by which rooms and presets should be related.
This patch has two modes, classic mode and advanced mode.

Classic mode is based on the original room editor (winroomedit) five room types, called Outside, Small Room, Medium Room, Large Room and Pipe.
A room type is applied to each room, and later this room type should be associated with a preset.

On the other hand, in the advanced mode presets are applied directly to the rooms, without intermediary room types.
Only Tomb Editor supports this mode.

## Classic mode

The classic mode requires an association between room types and presets.

### Preset for {Outside, Small Room, Medium Room, Large Room, Pipe}

When the room type is {Outside, Small Room, Medium Room, Large Room, Pipe}, this value is the preset assigned to the sounds.
If this value is None, no preset is assigned to the sounds.

> Allowed values:
>
> + 0
>
>   None
>
> + -1
>
>   Default
>
> + -2
>
>   Generic
>
> + -3
>
>   Padded Cell
>
> + -4
>
>   Room
>
> + -5
>
>   Bathroom
>
> + -6
>
>   Living Room
>
> + -7
>
>   Stone Room
>
> + -8
>
>   Auditorium
>
> + -9
>
>   Concert Hall
>
> + -10
>
>   Cave
>
> + -11
>
>   Arena
>
> + -12
>
>   Hangar
>
> + -13
>
>   Carpeted Hallway
>
> + -14
>
>   Hallway
>
> + -15
>
>   Stone Corridor
>
> + -16
>
>   Alley
>
> + -17
>
>   Forest
>
> + -18
>
>   City
>
> + -19
>
>   Mountains
>
> + -20
>
>   Quarry
>
> + -21
>
>   Plain
>
> + -22
>
>   Parking Lot
>
> + -23
>
>   Sewer Pipe
>
> + -24
>
>   Underwater
>
> + -25
>
>   Small Room
>
> + -26
>
>   Medium Room
>
> + -27
>
>   Large Room
>
> + -28
>
>   Medium Hall
>
> + -29
>
>   Large Hall
>
> + -30
>
>   Plate
>
> + 1
>
>   Custom 1
>
> + 2
>
>   Custom 2
>
> + 3
>
>   Custom 3
>
> + 4
>
>   Custom 4
>
> + 5
>
>   Custom 5
>
> + 6
>
>   Custom 6
>
> + 7
>
>   Custom 7
>
> + 8
>
>   Custom 8
>
> + 9
>
>   Custom 9
>
> + 10
>
>   Custom 10
>
> + 11
>
>   Custom 11
>
> + 12
>
>   Custom 12
>
> + 13
>
>   Custom 13
>
> + 14
>
>   Custom 14
>
> + 15
>
>   Custom 15
>
> + 16
>
>   Custom 16

## Custom presets

Besides the standard presets, this patch also provides custom presets.
A custom preset exposes its fields so that their values can be set by the level builder.

### Room

> Allowed values:
>
> + -10000 to 0
>
>   Attenuation of the room effect, in millibels

### Room high-frequency

> Allowed values:
>
> + -10000 to 0
>
>   Attenuation of the room high-frequency effect, in millibels

### Room rolloff factor

> Allowed values:
>
> + 0.0 to 10.0
>
>   Rolloff factor for the reflected signals

### Decay time

> Allowed values:
>
> + 0.1 to 20.0
>
>   Decay time, in seconds

### Decay high-frequency ratio

> Allowed values:
>
> + 0.1 to 2.0
>
>   Ratio of the decay time at high frequencies to the decay time at low frequencies

### Reflections

> Allowed values:
>
> + -10000 to 1000
>
>   Attenuation of early reflections relative to Room, in millibels

### Reflections delay

> Allowed values:
>
> + 0.0 to 0.3
>
>   Delay time of the first reflection relative to the direct path, in seconds

### Reverb

> Allowed values:
>
> + -10000 to 2000
>
>   Attenuation of late reverberation relative to Room, in millibels

### Reverb delay

> Allowed values:
>
> + 0.0 to 0.1
>
>   Time limit between the early reflections and the late reverberation relative to the time of the first reflection, in seconds

### Diffusion

> Allowed values:
>
> + 0.0 to 100.0
>
>   Echo density in the late reverberation decay, in percent

### Density

> Allowed values:
>
> + 0.0 to 100.0
>
>   Modal density in the late reverberation decay, in percent

### High-frequency reference

> Allowed values:
>
> + 20.0 to 20000.0
>
>   Reference high frequency, in hertz

## Performance

The standard presets require approximately the same processing time for a given sound.
Some of them, though, are always slower: Bathroom, Hangar, Mountains, Quarry, Plain and Sewer Pipe.

## Limitations

This patch expects the sound samples and flags not to change while the level is running.

Sounds that have L flag set and are shorter than 150 ms do not show reverb effect.

## Standard presets

The following tables show the values used internally by the standard presets.

### Default

```
Room:                       -1000
Room high-frequency:        -100
Room rolloff factor:        0.0
Decay time:                 1.49
Decay high-frequency ratio: 0.83
Reflections:                -2602
Reflections delay:          0.007
Reverb:                     200
Reverb delay:               0.011
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Generic

```
Room:                       -1000
Room high-frequency:        -100
Room rolloff factor:        0.0
Decay time:                 1.49
Decay high-frequency ratio: 0.83
Reflections:                -2602
Reflections delay:          0.007
Reverb:                     200
Reverb delay:               0.011
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Padded Cell

```
Room:                       -1000
Room high-frequency:        -6000
Room rolloff factor:        0.0
Decay time:                 0.17
Decay high-frequency ratio: 0.10
Reflections:                -1204
Reflections delay:          0.001
Reverb:                     207
Reverb delay:               0.002
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Room

```
Room:                       -1000
Room high-frequency:        -454
Room rolloff factor:        0.0
Decay time:                 0.40
Decay high-frequency ratio: 0.83
Reflections:                -1646
Reflections delay:          0.002
Reverb:                     53
Reverb delay:               0.003
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Bathroom

```
Room:                       -1000
Room high-frequency:        -1200
Room rolloff factor:        0.0
Decay time:                 1.49
Decay high-frequency ratio: 0.54
Reflections:                -370
Reflections delay:          0.007
Reverb:                     1030
Reverb delay:               0.011
Diffusion:                  100.0
Density:                    60.0
High-frequency reference:   5000.0
```

### Living Room

```
Room:                       -1000
Room high-frequency:        -6000
Room rolloff factor:        0.0
Decay time:                 0.50
Decay high-frequency ratio: 0.10
Reflections:                -1376
Reflections delay:          0.003
Reverb:                     -1104
Reverb delay:               0.004
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Stone Room

```
Room:                       -1000
Room high-frequency:        -300
Room rolloff factor:        0.0
Decay time:                 2.31
Decay high-frequency ratio: 0.64
Reflections:                -711
Reflections delay:          0.012
Reverb:                     83
Reverb delay:               0.017
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Auditorium

```
Room:                       -1000
Room high-frequency:        -476
Room rolloff factor:        0.0
Decay time:                 4.32
Decay high-frequency ratio: 0.59
Reflections:                -789
Reflections delay:          0.020
Reverb:                     -289
Reverb delay:               0.030
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Concert Hall

```
Room:                       -1000
Room high-frequency:        -500
Room rolloff factor:        0.0
Decay time:                 3.92
Decay high-frequency ratio: 0.70
Reflections:                -1230
Reflections delay:          0.020
Reverb:                     -2
Reverb delay:               0.029
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Cave

```
Room:                       -1000
Room high-frequency:        0
Room rolloff factor:        0.0
Decay time:                 2.91
Decay high-frequency ratio: 1.30
Reflections:                -602
Reflections delay:          0.015
Reverb:                     -302
Reverb delay:               0.022
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Arena

```
Room:                       -1000
Room high-frequency:        -698
Room rolloff factor:        0.0
Decay time:                 7.24
Decay high-frequency ratio: 0.33
Reflections:                -1166
Reflections delay:          0.020
Reverb:                     16
Reverb delay:               0.030
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Hangar

```
Room:                       -1000
Room high-frequency:        -1000
Room rolloff factor:        0.0
Decay time:                 10.05
Decay high-frequency ratio: 0.23
Reflections:                -602
Reflections delay:          0.020
Reverb:                     198
Reverb delay:               0.030
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Carpeted Hallway

```
Room:                       -1000
Room high-frequency:        -4000
Room rolloff factor:        0.0
Decay time:                 0.30
Decay high-frequency ratio: 0.10
Reflections:                -1831
Reflections delay:          0.002
Reverb:                     -1630
Reverb delay:               0.030
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Hallway

```
Room:                       -1000
Room high-frequency:        -300
Room rolloff factor:        0.0
Decay time:                 1.49
Decay high-frequency ratio: 0.59
Reflections:                -1219
Reflections delay:          0.007
Reverb:                     441
Reverb delay:               0.011
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Stone Corridor

```
Room:                       -1000
Room high-frequency:        -237
Room rolloff factor:        0.0
Decay time:                 2.70
Decay high-frequency ratio: 0.79
Reflections:                -1214
Reflections delay:          0.013
Reverb:                     395
Reverb delay:               0.020
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Alley

```
Room:                       -1000
Room high-frequency:        -270
Room rolloff factor:        0.0
Decay time:                 1.49
Decay high-frequency ratio: 0.86
Reflections:                -1204
Reflections delay:          0.007
Reverb:                     -4
Reverb delay:               0.011
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Forest

```
Room:                       -1000
Room high-frequency:        -3300
Room rolloff factor:        0.0
Decay time:                 1.49
Decay high-frequency ratio: 0.54
Reflections:                -2560
Reflections delay:          0.162
Reverb:                     -613
Reverb delay:               0.088
Diffusion:                  79.0
Density:                    100.0
High-frequency reference:   5000.0
```

### City

```
Room:                       -1000
Room high-frequency:        -800
Room rolloff factor:        0.0
Decay time:                 1.49
Decay high-frequency ratio: 0.67
Reflections:                -2273
Reflections delay:          0.007
Reverb:                     -2217
Reverb delay:               0.011
Diffusion:                  50.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Mountains

```
Room:                       -1000
Room high-frequency:        -2500
Room rolloff factor:        0.0
Decay time:                 1.49
Decay high-frequency ratio: 0.21
Reflections:                -2780
Reflections delay:          0.300
Reverb:                     -2014
Reverb delay:               0.100
Diffusion:                  27.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Quarry

```
Room:                       -1000
Room high-frequency:        -1000
Room rolloff factor:        0.0
Decay time:                 1.49
Decay high-frequency ratio: 0.83
Reflections:                -10000
Reflections delay:          0.061
Reverb:                     500
Reverb delay:               0.025
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Plain

```
Room:                       -1000
Room high-frequency:        -2000
Room rolloff factor:        0.0
Decay time:                 1.49
Decay high-frequency ratio: 0.50
Reflections:                -2466
Reflections delay:          0.179
Reverb:                     -2514
Reverb delay:               0.100
Diffusion:                  21.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Parking Lot

```
Room:                       -1000
Room high-frequency:        0
Room rolloff factor:        0.0
Decay time:                 1.65
Decay high-frequency ratio: 1.50
Reflections:                -1363
Reflections delay:          0.008
Reverb:                     -1153
Reverb delay:               0.012
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Sewer Pipe

```
Room:                       -1000
Room high-frequency:        -1000
Room rolloff factor:        0.0
Decay time:                 2.81
Decay high-frequency ratio: 0.14
Reflections:                429
Reflections delay:          0.014
Reverb:                     648
Reverb delay:               0.021
Diffusion:                  80.0
Density:                    60.0
High-frequency reference:   5000.0
```

### Underwater

```
Room:                       -1000
Room high-frequency:        -4000
Room rolloff factor:        0.0
Decay time:                 1.49
Decay high-frequency ratio: 0.10
Reflections:                -449
Reflections delay:          0.007
Reverb:                     1700
Reverb delay:               0.011
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Small Room

```
Room:                       -1000
Room high-frequency:        -600
Room rolloff factor:        0.0
Decay time:                 1.10
Decay high-frequency ratio: 0.83
Reflections:                -400
Reflections delay:          0.005
Reverb:                     500
Reverb delay:               0.010
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Medium Room

```
Room:                       -1000
Room high-frequency:        -600
Room rolloff factor:        0.0
Decay time:                 1.30
Decay high-frequency ratio: 0.83
Reflections:                -1000
Reflections delay:          0.010
Reverb:                     -200
Reverb delay:               0.020
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Large Room

```
Room:                       -1000
Room high-frequency:        -600
Room rolloff factor:        0.0
Decay time:                 1.50
Decay high-frequency ratio: 0.83
Reflections:                -1600
Reflections delay:          0.020
Reverb:                     -1000
Reverb delay:               0.040
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Medium Hall

```
Room:                       -1000
Room high-frequency:        -600
Room rolloff factor:        0.0
Decay time:                 1.80
Decay high-frequency ratio: 0.70
Reflections:                -1300
Reflections delay:          0.015
Reverb:                     -800
Reverb delay:               0.030
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Large Hall

```
Room:                       -1000
Room high-frequency:        -600
Room rolloff factor:        0.0
Decay time:                 1.80
Decay high-frequency ratio: 0.70
Reflections:                -2000
Reflections delay:          0.030
Reverb:                     -1400
Reverb delay:               0.060
Diffusion:                  100.0
Density:                    100.0
High-frequency reference:   5000.0
```

### Plate

```
Room:                       -1000
Room high-frequency:        -200
Room rolloff factor:        0.0
Decay time:                 1.30
Decay high-frequency ratio: 0.90
Reflections:                0
Reflections delay:          0.002
Reverb:                     0
Reverb delay:               0.010
Diffusion:                  100.0
Density:                    75.0
High-frequency reference:   5000.0
```

## References

**Microsoft. *IDirectSoundFXI3DL2Reverb8::SetPreset Method*. <<https://docs.microsoft.com/en-us/previous-versions/windows/desktop/ee418236(v=vs.85)>>.**

**Microsoft. *DSFXI3DL2Reverb Structure*. <<https://docs.microsoft.com/en-us/previous-versions/windows/desktop/ee416838(v=vs.85)>>.**

**Microsoft. *Setting Effects on Buffers*. <<https://docs.microsoft.com/en-us/previous-versions/windows/desktop/ee418790(v=vs.85)>>.**

</body>
</html>

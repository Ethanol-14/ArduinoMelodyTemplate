import mido

mid = mido.MidiFile("pkmnrby.mid", clip = True)

for tracks in mid.tracks:
    print(tracks)

for notesA in mid.tracks[1][:4000]:
    print(notesA)

print("done")

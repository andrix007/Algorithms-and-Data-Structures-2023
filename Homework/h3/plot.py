import matplotlib.pyplot as plt

with open('bestCaseScenario.txt') as f:
    lines = f.readlines()
    sizes1 = [float(line.split(" ")[0])/1000 for line in lines]
    times1 = [float(line.split(" ")[1].replace('\n','')) for line in lines]

with open('averageCaseScenario.txt') as f:
    lines = f.readlines()
    sizes2 = [float(line.split(" ")[0])/1000 for line in lines]
    times2 = [float(line.split(" ")[1].replace('\n','')) for line in lines]

with open('worstCaseScenario.txt') as f:
    lines = f.readlines()
    sizes3 = [float(line.split(" ")[0])/1000 for line in lines]
    times3 = [float(line.split(" ")[1].replace('\n','')) for line in lines]


plt.plot(sizes1, times1, label='Best Case Scenario')
plt.plot(sizes2, times2, label='Average Case Scenario')
plt.plot(sizes3, times3, label='Worst Case Scenario')

plt.legend()

plt.show()
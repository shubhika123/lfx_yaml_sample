import yaml

with open('generated.yaml') as f:
    data = yaml.safe_load(f)

print(data)  # Add this line to debug what is loaded

for inst in data['inst']:   # This line causes KeyError if 'inst' is missing in data
    print(inst)

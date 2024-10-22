import json

# Load the statistics.json file
with open('statistics.json') as stats_file:
    stats_data = json.load(stats_file)

# Load the metrics_sla.json file
with open('metrics_sla.json') as sla_file:
    sla_data = json.load(sla_file)

# Iterate over each transaction in stats.json
for transaction, stats in stats_data.items():
    # Get the corresponding SLA values for the transaction
    sla = sla_data.get("transactions").get(transaction)

    if sla:
        # Compare errorPct
        error_pct = stats.get("errorPct")
        sla_error_pct = sla.get('Error%').get('SLA')

        # Compare throughput
        throughput = stats.get('throughput')
        sla_throughput = sla.get('TPS').get('SLA')

        print(f"Transaction: {transaction}")
        print(f"Error Pct: {error_pct} (SLA: {sla_error_pct})")
        print(f"Throughput: {throughput} (SLA: {sla_throughput})")

        if error_pct > sla_error_pct:
            print(f"Error percentage for {transaction} exceeds SLA!")

        if throughput < sla_throughput:
            print(f"Throughput for {transaction} is below SLA!")
    else:
        print(f"No SLA found for transaction: {transaction}")

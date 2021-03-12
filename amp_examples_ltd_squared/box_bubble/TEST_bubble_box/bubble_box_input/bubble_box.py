graphs=[{'edges': {0: {'PDG': 666, 'indices': (1,), 'signature': [[0, 0], [1, 0, 0, 0]], 'momentum': 'p1', 'name': 'q1', 'type': 'in', 'vertices': (1, 101), 'power': 1}, 1: {'PDG': 666, 'indices': (3,), 'signature': [[0, 0], [0, 1, 0, 0]], 'momentum': 'p2', 'name': 'q2', 'type': 'in', 'vertices': (2, 102), 'power': 1}, 2: {'PDG': 666, 'indices': (5, 6), 'signature': [[1, 0], [0, 0, 0, 0]], 'momentum': 'k1', 'name': 'p1', 'type': 'virtual', 'vertices': (102, 88), 'power': 1}, 3: {'PDG': 666, 'indices': (7, 8), 'signature': [[0, 1], [0, 0, 0, 0]], 'momentum': 'k2', 'name': 'pNew1', 'type': 'virtual', 'vertices': (101, 88), 'power': 1}, 4: {'PDG': 666, 'indices': (9, 10), 'signature': [[1, 1], [0, 0, 0, 0]], 'momentum': 'k1+k2', 'name': 'pNew2', 'type': 'virtual', 'vertices': (88, 101), 'power': 1}, 5: {'PDG': 666, 'indices': (11, 12), 'signature': [[1, 0], [1, 0, 0, 0]], 'momentum': 'k1+p1', 'name': 'p2', 'type': 'virtual', 'vertices': (101, 103), 'power': 1}, 6: {'PDG': 666, 'indices': (13, 14), 'signature': [[1, 0], [1, 0, -1, 0]], 'momentum': 'k1+p1-p3', 'name': 'p3', 'type': 'virtual', 'vertices': (103, 104), 'power': 1}, 7: {'PDG': 666, 'indices': (15, 16), 'signature': [[1, 0], [0, -1, 0, 0]], 'momentum': 'k1-p2', 'name': 'p4', 'type': 'virtual', 'vertices': (104, 102), 'power': 1}, 8: {'PDG': 666, 'indices': (17,), 'signature': [[0, 0], [0, 0, 1, 0]], 'momentum': 'p3', 'name': 'pout3', 'type': 'out', 'vertices': (103, 3), 'power': 1}, 9: {'PDG': 666, 'indices': (19,), 'signature': [[0, 0], [0, 0, 0, 1]], 'momentum': 'p4', 'name': 'pout4', 'type': 'out', 'vertices': (104, 4), 'power': 1}}, 'nodes': {1: {'PDGs': (666,), 'edge_ids': (0,), 'indices': (1,), 'momenta': ['p1'], 'vertex_id': -1}, 2: {'PDGs': (666,), 'edge_ids': (1,), 'indices': (3,), 'momenta': ['p2'], 'vertex_id': -1}, 3: {'PDGs': (666,), 'edge_ids': (8,), 'indices': (17,), 'momenta': ['p3'], 'vertex_id': -2}, 4: {'PDGs': (666,), 'edge_ids': (9,), 'indices': (19,), 'momenta': ['p4'], 'vertex_id': -2}, 101: {'PDGs': (666, 666, 666, 666), 'edge_ids': (0, 3, 4, 5), 'indices': (1, 8, 10, 12), 'momenta': ['p1', 'k2', 'k1+k2', 'k1+p1'], 'vertex_id': 0}, 102: {'PDGs': (666, 666, 666), 'edge_ids': (1, 2, 7), 'indices': (3, 6, 16), 'momenta': ['p2', 'k1', 'k1-p2'], 'vertex_id': 0}, 103: {'PDGs': (666, 666, 666), 'edge_ids': (5, 6, 8), 'indices': (12, 14, 17), 'momenta': ['k1+p1', 'k1+p1-p3', 'p3'], 'vertex_id': 0}, 104: {'PDGs': (666, 666, 666), 'edge_ids': (6, 7, 9), 'indices': (14, 16, 19), 'momenta': ['k1+p1-p3', 'k1-p2', 'p4'], 'vertex_id': 0}, 88: {'PDGs': (666, 666, 666), 'edge_ids': (2, 3, 4), 'indices': (6, 8, 10), 'momenta': ['k1', 'k2', 'k1+k2'], 'vertex_id': 0}}, 'analytic_num': '1-(1/xT)*(sp(k1,k1))-(1/xS)*sp(k1+p1,k1+p1)-(1/xT)*sp(k1+p1-p3,k1+p1-p3)-(1/xS)*sp(k1+p1-p3-p4,k1+p1-p3-p4)', 'overall_factor': 1, 'in_momenta': ('p1', 'p2'), 'out_momenta': ('p3', 'p4'), 'diag_set': 'bubble_box'}, {'edges': {0: {'PDG': 666, 'indices': (1,), 'signature': [[0, 0], [1, 0, 0, 0]], 'momentum': 'p1', 'name': 'q1', 'type': 'in', 'vertices': (1, 101), 'power': 1}, 1: {'PDG': 666, 'indices': (3,), 'signature': [[0, 0], [0, 1, 0, 0]], 'momentum': 'p2', 'name': 'q2', 'type': 'in', 'vertices': (2, 102), 'power': 1}, 2: {'PDG': 666, 'indices': (5, 6), 'signature': [[1, 0], [0, 0, 0, 0]], 'momentum': 'k1', 'name': 'p1', 'type': 'virtual', 'vertices': (102, 101), 'power': 1}, 3: {'PDG': 667, 'indices': (7, 8), 'signature': [[0, 1], [0, 0, 0, 0]], 'momentum': 'k2', 'name': 'pUV', 'type': 'virtual', 'vertices': (101, 101), 'power': 2}, 4: {'PDG': 666, 'indices': (9, 10), 'signature': [[1, 0], [1, 0, 0, 0]], 'momentum': 'k1+p1', 'name': 'p2', 'type': 'virtual', 'vertices': (101, 103), 'power': 1}, 5: {'PDG': 666, 'indices': (11, 12), 'signature': [[1, 0], [1, 0, -1, 0]], 'momentum': 'k1+p1-p3', 'name': 'p3', 'type': 'virtual', 'vertices': (103, 104), 'power': 1}, 6: {'PDG': 666, 'indices': (13, 14), 'signature': [[1, 0], [0, -1, 0, 0]], 'momentum': 'k1-p2', 'name': 'p4', 'type': 'virtual', 'vertices': (104, 102), 'power': 1}, 7: {'PDG': 666, 'indices': (15,), 'signature': [[0, 0], [0, 0, 1, 0]], 'momentum': 'p3', 'name': 'pout3', 'type': 'out', 'vertices': (103, 3), 'power': 1}, 8: {'PDG': 666, 'indices': (17,), 'signature': [[0, 0], [0, 0, 0, 1]], 'momentum': 'p4', 'name': 'pout4', 'type': 'out', 'vertices': (104, 4), 'power': 1}}, 'nodes': {1: {'PDGs': (666,), 'edge_ids': (0,), 'indices': (1,), 'momenta': ['p1'], 'vertex_id': -1}, 2: {'PDGs': (666,), 'edge_ids': (1,), 'indices': (3,), 'momenta': ['p2'], 'vertex_id': -1}, 3: {'PDGs': (666,), 'edge_ids': (7,), 'indices': (15,), 'momenta': ['p3'], 'vertex_id': -2}, 4: {'PDGs': (666,), 'edge_ids': (8,), 'indices': (17,), 'momenta': ['p4'], 'vertex_id': -2}, 101: {'PDGs': (666, 666, 667, 666), 'edge_ids': (0, 2, 3, 4), 'indices': (1, 6, 8, 10), 'momenta': ['p1', 'k1', 'k2', 'k1+p1'], 'vertex_id': 0}, 102: {'PDGs': (666, 666, 666), 'edge_ids': (1, 2, 6), 'indices': (3, 6, 14), 'momenta': ['p2', 'k1', 'k1-p2'], 'vertex_id': 0}, 103: {'PDGs': (666, 666, 666), 'edge_ids': (4, 5, 7), 'indices': (10, 12, 15), 'momenta': ['k1+p1', 'k1+p1-p3', 'p3'], 'vertex_id': 0}, 104: {'PDGs': (666, 666, 666), 'edge_ids': (5, 6, 8), 'indices': (12, 14, 17), 'momenta': ['k1+p1-p3', 'k1-p2', 'p4'], 'vertex_id': 0}}, 'analytic_num': '1-(1/xT)*(sp(k1,k1))-(1/xS)*sp(k1+p1,k1+p1)-(1/xT)*sp(k1+p1-p3,k1+p1-p3)-(1/xS)*sp(k1+p1-p3-p4,k1+p1-p3-p4)', 'overall_factor': 1, 'in_momenta': ('p1', 'p2'), 'out_momenta': ('p3', 'p4'), 'diag_set': 'bubble_box'}];
long long int toggleBit(long long int bitVector, int index) {
	if (index >= 0) {
		long long int mask = 1 << index;
		if ((bitVector & mask) == 0) {
			bitVector |= mask;
		}
		else {
			bitVector &= ~mask;
		}
	}
	return bitVector;
}